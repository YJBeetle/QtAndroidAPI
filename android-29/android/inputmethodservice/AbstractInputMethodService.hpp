#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl;
}
namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodSessionImpl;
}
namespace android::view
{
	class KeyEvent_DispatcherState;
}
namespace android::view
{
	class MotionEvent;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::inputmethodservice
{
	class AbstractInputMethodService : public android::app::Service
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractInputMethodService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		AbstractInputMethodService(QAndroidJniObject obj);
		
		// Constructors
		AbstractInputMethodService();
		
		// Methods
		QAndroidJniObject getKeyDispatcherState();
		QAndroidJniObject onBind(android::content::Intent arg0);
		QAndroidJniObject onCreateInputMethodInterface();
		QAndroidJniObject onCreateInputMethodSessionInterface();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
	};
} // namespace android::inputmethodservice

