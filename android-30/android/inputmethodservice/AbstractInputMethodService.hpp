#pragma once

#include "../app/Service.hpp"

class JArray;
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
		AbstractInputMethodService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		AbstractInputMethodService();
		
		// Methods
		android::view::KeyEvent_DispatcherState getKeyDispatcherState() const;
		JObject onBind(android::content::Intent arg0) const;
		android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl onCreateInputMethodInterface() const;
		android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl onCreateInputMethodSessionInterface() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
	};
} // namespace android::inputmethodservice

