#pragma once

#include "../../../JObject.hpp"

class JIntArray;

namespace android::icu::text
{
	class UnicodeFilter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeFilter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean contains(jint arg0) const;
		jint matches(JObject arg0, JIntArray arg1, jint arg2, jboolean arg3) const;
	};
} // namespace android::icu::text

