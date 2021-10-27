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
		
		VoiceInteractor_Request(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor_Request() = default;
		
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

