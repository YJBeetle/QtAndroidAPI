#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
class JObject;

namespace android::content
{
	class Intent_FilterComparison : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Intent_FilterComparison(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Intent_FilterComparison(QAndroidJniObject obj);
		
		// Constructors
		Intent_FilterComparison(android::content::Intent arg0);
		
		// Methods
		jboolean equals(JObject arg0);
		android::content::Intent getIntent();
		jint hashCode();
	};
} // namespace android::content

