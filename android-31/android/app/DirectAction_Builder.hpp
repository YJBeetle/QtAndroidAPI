#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class DirectAction;
}
namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class DirectAction_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DirectAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DirectAction_Builder(QAndroidJniObject obj);
		
		// Constructors
		DirectAction_Builder(jstring arg0);
		
		// Methods
		android::app::DirectAction build();
		android::app::DirectAction_Builder setExtras(android::os::Bundle arg0);
		android::app::DirectAction_Builder setLocusId(android::content::LocusId arg0);
	};
} // namespace android::app

