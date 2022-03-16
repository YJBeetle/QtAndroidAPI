#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::app
{
	class Activity;
}
namespace android::appwidget
{
	class AppWidgetHostView;
}
namespace android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}

namespace android::appwidget
{
	class AppWidgetHost : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppWidgetHost(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetHost(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppWidgetHost(android::content::Context arg0, jint arg1);
		
		// Methods
		static void deleteAllHosts();
		jint allocateAppWidgetId() const;
		android::appwidget::AppWidgetHostView createView(android::content::Context arg0, jint arg1, android::appwidget::AppWidgetProviderInfo arg2) const;
		void deleteAppWidgetId(jint arg0) const;
		void deleteHost() const;
		JIntArray getAppWidgetIds() const;
		void startAppWidgetConfigureActivityForResult(android::app::Activity arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4) const;
		void startListening() const;
		void stopListening() const;
	};
} // namespace android::appwidget

