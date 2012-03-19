/*
 * Library to easily retrive and display images and display text
 * intended as questionare. 
 *
 * Written by Alexnader Skoglund <alesko@member.fsf.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#include "kicyberlab.h"

void kiInitBus(void)
{
}

int  kiSetBusSpeed(int speed)
{
  return 1;
}


int  kiGetCameras(int deviceType)
{
  return 1;
}

int  kiSetCameraFeature(int cameraID, int feature,int value)
{
  return 1;
}

int  kiStartCamera(int cameraID)
{
  return 1;
}

int  kiGetImage(int cameraID, int* videoTexture)
{
  return 1;
}

int  kiLoadQuestionare(int fd,char rw)
{
  return 1;
}

int  kiShuffleVector(int* list,int number)
{
  return 1;
}
