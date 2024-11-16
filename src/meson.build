project('vue-file-generator', 'cpp')

sources = files(['main.c++'])

subdir('generator')
subdir('outputManager')

sources += files(['Generator.c++'])

executable('app-gen', sources)