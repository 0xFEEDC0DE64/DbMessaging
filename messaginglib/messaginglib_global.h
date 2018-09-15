#pragma once

#include <QtGlobal>

#if defined(MESSAGINGLIB_LIBRARY)
#  define MESSAGINGLIB_EXPORT Q_DECL_EXPORT
#else
#  define MESSAGINGLIB_EXPORT Q_DECL_IMPORT
#endif
