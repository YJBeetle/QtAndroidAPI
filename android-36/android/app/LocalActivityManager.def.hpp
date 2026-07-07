#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class Window;
}
class JString;

namespace android::app
{
	class LocalActivityManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalActivityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalActivityManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LocalActivityManager(android::app::Activity arg0, jboolean arg1);
		
		// Methods
		android::view::Window destroyActivity(JString arg0, jboolean arg1) const;
		void dispatchCreate(android::os::Bundle arg0) const;
		void dispatchDestroy(jboolean arg0) const;
		void dispatchPause(jboolean arg0) const;
		void dispatchResume() const;
		void dispatchStop() const;
		android::app::Activity getActivity(JString arg0) const;
		android::app::Activity getCurrentActivity() const;
		JString getCurrentId() const;
		void removeAllActivities() const;
		android::os::Bundle saveInstanceState() const;
		android::view::Window startActivity(JString arg0, android::content::Intent arg1) const;
	};
} // namespace android::app

