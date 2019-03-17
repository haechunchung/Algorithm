### 아래와 같이 visual studio에서 코드를 실행 시켜 코드가 돌아가지만 콘솔 결과창이 바로 꺼질 경우

![C-error-1](/image_file/C-error-1.png)

# 해결책

### 1. 메뉴의 [프로젝트] - ['프로젝트 이름' 속성]에 들어가서

![C-error-2](/image_file/C-error-2.png)

### 2. 왼쪽의 [구성 속성] - [링커] - [시스템]에서 [하의 시스템] - 콘솔(/SUBSYTEM:CONSOLE)을 선택

![C-error-3](/image_file/C-error-3.png)
