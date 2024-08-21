This is a project

1. Global Light:  
   - **BP_sky_sphere**: BP sky sphere  
   - **Direction_Light**: Sun's light direction  
   - **Sky_light**: Modify the outside skyline  

![Screenshot 2024-08-10 213756](https://github.com/user-attachments/assets/de2e428c-3089-4819-8e29-539d85ec2640)  
![Screenshot 2024-08-10 213833](https://github.com/user-attachments/assets/d7a9002b-8b6d-42e1-a14a-7b30130e168c)

2. Fixing the light shader:
   - Find the material element's Parent:
     ![Screenshot 2024-08-11 091450](https://github.com/user-attachments/assets/45a42d52-8924-441a-9c27-dd8511dda4f9)
   - Disable the pixel Deepth Offset:
     ![Screenshot 2024-08-11 091422](https://github.com/user-attachments/assets/f8250b57-4f3f-4af7-8ee5-c061abeef965)

3. Using point into the mover compoment to satisy light tracing does not include static mesh compoment :
   - Pointing to show properity of owner:
   ![Screenshot 2024-08-13 103357](https://github.com/user-attachments/assets/4002f793-5039-4350-89f3-bdeba750b3ec)

4. Reference:
   - InterConstto
     ![Screenshot 2024-08-14 204428](https://github.com/user-attachments/assets/b83605df-e81f-4568-a3a0-1862d22016af)

5. Scene Compoment:
   - Adding grabber by creating a new scene compoment, enable to catch the rotation of interactive objects
     ![Screenshot 2024-08-15 201904](https://github.com/user-attachments/assets/d8dfcc89-b4df-4878-92d2-97e50675e874)
     ![Screenshot 2024-08-15 201852](https://github.com/user-attachments/assets/597dacef-c5b7-4506-905c-6383bf344be3)

6. Line / Shape Trace
   - Creating channel to enable collision block light or not
     ![Screenshot 2024-08-15 203305](https://github.com/user-attachments/assets/92fb9c19-c1e0-4ad9-aab8-3252a82168b9)
     ![Screenshot 2024-08-15 203759](https://github.com/user-attachments/assets/7d839a9b-1d07-4563-94f4-d361754a6197)

7. UWorld()
   - UWorld contains multiplies of Ulevel() for optimzing efficency
   - reference:
   - https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/Engine/Engine/UWorld?application_version=4.27
     ![Screenshot 2024-08-15 205304](https://github.com/user-attachments/assets/4dad1ee0-66d2-41f5-b95e-16beb14f5810)

8.  showing the grabeer line(linedebug):
   - enable to see the grabbing distance
   ![Screenshot 2024-08-16 195733](https://github.com/user-attachments/assets/ab990935-9ccf-49be-b059-340c5ce656ee)
   ![Screenshot 2024-08-16 195753](https://github.com/user-attachments/assets/dd70b3fa-765f-4796-9927-5f3ed8942732)
   ![Screenshot 2024-08-16 211122](https://github.com/user-attachments/assets/241a4d57-563c-4d80-a4d3-b9277cea234e)

9. geometry sweep
   - display sweeping
   - ![Screenshot 2024-08-19 135818](https://github.com/user-attachments/assets/fc249f16-e6ba-4c32-9767-2b7b7c9ee369)

10. Physics Handle
    - Enable player can grab the object
    - Make sure physichandle is not null
    - ![Screenshot 2024-08-20 194055](https://github.com/user-attachments/assets/3e6f7b94-6d07-4cd9-b4ed-d9e601e1a1d9)
    - ![Screenshot 2024-08-20 194846](https://github.com/user-attachments/assets/5b4b5957-b9b1-4a29-ae18-098fb6ad8333)
    - ![Screenshot 2024-08-20 200030](https://github.com/user-attachments/assets/d30a4fc0-711c-4045-acf1-2fe8ed12a8ff)
   
11. DrawdebugSphere
    - enable to debug where did we grab
    - ![Screenshot 2024-08-20 202929](https://github.com/user-attachments/assets/c2b1fe9a-07b6-41ca-a1c5-f2ee9065fcd1)
    - ![Screenshot 2024-08-20 202957](https://github.com/user-attachments/assets/08d74bae-3677-4819-b122-da4bfc509b43)


















