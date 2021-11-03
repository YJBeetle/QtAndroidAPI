#pragma once

#include "./FragmentContainer.hpp"

class JArray;
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
class JObject;
class JString;

namespace android::app
{
	class FragmentHostCallback : public android::app::FragmentContainer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FragmentHostCallback(const char *className, const char *sig, Ts...agv) : android::app::FragmentContainer(className, sig, std::forward<Ts>(agv)...) {}
		FragmentHostCallback(QJniObject obj);
		
		// Constructors
		FragmentHostCallback(android::content::Context arg0, android::os::Handler arg1, jint arg2);
		
		// Methods
		void onAttachFragment(android::app::Fragment arg0) const;
		void onDump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		android::view::View onFindViewById(jint arg0) const;
		JObject onGetHost() const;
		android::view::LayoutInflater onGetLayoutInflater() const;
		jint onGetWindowAnimations() const;
		jboolean onHasView() const;
		jboolean onHasWindowAnimations() const;
		void onInvalidateOptionsMenu() const;
		void onRequestPermissionsFromFragment(android::app::Fragment arg0, JArray arg1, jint arg2) const;
		jboolean onShouldSaveFragmentState(android::app::Fragment arg0) const;
		void onStartActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const;
		void onStartIntentSenderFromFragment(android::app::Fragment arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7) const;
		jboolean onUseFragmentManagerInflaterFactory() const;
	};
} // namespace android::app

