#pragma once

#include "../../../JObject.hpp"

namespace android::app::sdksandbox
{
	class SandboxedSdk;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}

namespace android::app::sdksandbox
{
	class SandboxedSdkProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SandboxedSdkProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SandboxedSdkProvider(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SandboxedSdkProvider();
		
		// Methods
		void attachContext(android::content::Context arg0) const;
		void beforeUnloadSdk() const;
		android::content::Context getContext() const;
		android::view::View getView(android::content::Context arg0, android::os::Bundle arg1, jint arg2, jint arg3) const;
		android::app::sdksandbox::SandboxedSdk onLoadSdk(android::os::Bundle arg0) const;
	};
} // namespace android::app::sdksandbox

