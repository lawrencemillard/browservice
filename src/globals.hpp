#pragma once

#include "config.hpp"

namespace browservice {

class TextRenderContext;
class XWindow;

class Globals {
SHARED_ONLY_CLASS(Globals);
public:
    Globals(CKey, shared_ptr<Config> config);

    const shared_ptr<Config> config;
#ifndef _WIN32
    const shared_ptr<XWindow> xWindow;
#endif
    const PathStr dotDirPath;
    const shared_ptr<TextRenderContext> textRenderContext;
};

extern shared_ptr<Globals> globals;

}
