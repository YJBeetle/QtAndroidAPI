#pragma once

#include "../../__JniBaseClass.hpp"
#include "./FragmentContainer.hpp"

namespace android::app
{
	class Fragment;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentSender;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class View;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::app
{
	class FragmentHostCallback : public android::app::FragmentContainer
	{
	public:
		// Fields
		
		FragmentHostCallback(QAndroidJniObject obj);
		// Constructors
		FragmentHostCallback(android::content::Context &arg0, android::os::Handler &arg1, jint &arg2);
		FragmentHostCallback() = default;
		
		// Methods
		void onAttachFragment(android::app::Fragment arg0);
		void onDump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		void onDump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		QAndroidJniObject onFindViewById(jint arg0);
		jobject onGetHost();
		QAndroidJniObject onGetLayoutInflater();
		jint onGetWindowAnimations();
		jboolean onHasView();
		jboolean onHasWindowAnimations();
		void onInvalidateOptionsMenu();
		void onRequestPermissionsFromFragment(android::app::Fragment arg0, jarray arg1, jint arg2);
		jboolean onShouldSaveFragmentState(android::app::Fragment arg0);
		void onStartActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3);
		void onStartIntentSenderFromFragment(android::app::Fragment arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7);
		jboolean onUseFragmentManagerInflaterFactory();
	};
} // namespace android::app

