import os
import re

# 设置目录路径
directory_path = 'src'  # 替换为你的cpp文件目录
output_file = 'REAMDE.md'  # 输出的Markdown文件
pretext_file = 'README_PRE.md'

with open(pretext_file, 'r', encoding='utf-8') as pre:
    pretext = pre.read()
    with open(output_file, 'w', encoding='utf-8') as md:
        md.write(pretext)

# 正则表达式，用于匹配C++中的多行注释
comment_pattern = re.compile(r'/\*.*?\*/', re.DOTALL)

# 遍历目录下的所有文件
for filename in os.listdir(directory_path):
    if filename.endswith('.cpp'):
        file_path = os.path.join(directory_path, filename)
        with open(file_path, 'r', encoding='utf-8') as file:
            content = file.read()
            # 查找文件中的注释
            comments = comment_pattern.findall(content)
            # 写入Markdown文件
            with open(output_file, 'a', encoding='utf-8') as md_file:
                for comment in comments:
                    # 去除注释标记，并清理格式
                    cleaned_comment = re.sub(r'/\*|\*/', '', comment).strip()
                    # 写入Markdown文件，标明来源文件
                    md_file.write(f'### [{filename}](src/{filename})\n\n{cleaned_comment}\n\n')

print(f'Comments have been extracted and saved to {output_file} :)')