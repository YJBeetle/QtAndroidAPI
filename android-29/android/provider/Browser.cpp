#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./Browser.hpp"

namespace android::provider
{
	// Fields
	JString Browser::EXTRA_APPLICATION_ID()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_APPLICATION_ID",
			"Ljava/lang/String;"
		);
	}
	JString Browser::EXTRA_CREATE_NEW_TAB()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_CREATE_NEW_TAB",
			"Ljava/lang/String;"
		);
	}
	JString Browser::EXTRA_HEADERS()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_HEADERS",
			"Ljava/lang/String;"
		);
	}
	JString Browser::INITIAL_ZOOM_LEVEL()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"INITIAL_ZOOM_LEVEL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	Browser::Browser()
		: JObject(
			"android.provider.Browser",
			"()V"
		) {}
	
	// Methods
	void Browser::sendString(android::content::Context arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.provider.Browser",
			"sendString",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

