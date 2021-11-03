#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class Range : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Range(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Range(QAndroidJniObject obj);
		
		// Constructors
		Range(JObject arg0, JObject arg1);
		
		// Methods
		static android::util::Range create(JObject arg0, JObject arg1);
		JObject clamp(JObject arg0);
		jboolean contains(android::util::Range arg0);
		jboolean contains(JObject arg0);
		jboolean equals(JObject arg0);
		android::util::Range extend(android::util::Range arg0);
		android::util::Range extend(JObject arg0);
		android::util::Range extend(JObject arg0, JObject arg1);
		JObject getLower();
		JObject getUpper();
		jint hashCode();
		android::util::Range intersect(android::util::Range arg0);
		android::util::Range intersect(JObject arg0, JObject arg1);
		JString toString();
	};
} // namespace android::util

