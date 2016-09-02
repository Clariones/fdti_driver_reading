/*
** Copyright (C) 2010 Eff'Innov Technologies.  All rights reserved.
** May not be redistributed without prior written permission.
**
** Based on Java version by DeltaDore, subject to DeltaDore copyrights
**
** Note: Eff'Innov Technologies disclaims responsibility for any malfunction
** or error that may arise from any change to the current file, provided that such
** change have not been submitted to and formerly approved by Eff'Innov Technologies,
** prior to the occurence of such malfunction or error
**
** Author: Mickael Leforestier (mickael.leforestier@effinnov.com)
**
** History log:
** ------------------------------------------------------------------------------
** Author              | Date             | Changes
** ------------------------------------------------------------------------------
** mleforestier        | 092410           | First version
** ylebret             | 280212           | refactoring
*/

#ifndef SIRENMESSAGE_H
#define SIRENMESSAGE_H

#include "control/AlarmMessage.h"

namespace deltadoreX2d
{

class SirenMessage : public virtual AlarmMessage
{
    public :
        virtual ~SirenMessage(){};

        virtual int getTemperature() const=0;
        virtual void setTemperature(int value)=0;
};
}

#endif /* SIRENMESSAGE_H */
