#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}

namespace android::app
{
	class VoiceInteractor_Request : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		QAndroidJniObject getActivity();
		QAndroidJniObject getContext();
		jstring getName();
		void onAttached(android::app::Activity arg0);
		void onCancel();
		void onDetached();
		jstring toString();
	};
} // namespace android::app

