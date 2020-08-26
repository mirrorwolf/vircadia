//
//  ApplicationEvents.h
//  libraries/shared/src
//
//  Created by Kalila L. on 8/25/20.
//  Copyright 2020 Vircadia contributors.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_ApplicationEvents_h
#define hifi_ApplicationEvents_h

#include <QEvent>

enum ApplicationEvent {
    // Execute a lambda function
    Lambda = QEvent::User + 1,
    // Trigger the next render
    Render,
    // Trigger the next idle
    Idle,
    MouseResetEvent
};

#endif // hifi_ApplicationEvents_h
