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
		JObject clamp(JObject arg0) const;
		jboolean contains(android::util::Range arg0) const;
		jboolean contains(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		android::util::Range extend(android::util::Range arg0) const;
		android::util::Range extend(JObject arg0) const;
		android::util::Range extend(JObject arg0, JObject arg1) const;
		JObject getLower() const;
		JObject getUpper() const;
		jint hashCode() const;
		android::util::Range intersect(android::util::Range arg0) const;
		android::util::Range intersect(JObject arg0, JObject arg1) const;
		JString toString() const;
	};
} // namespace android::util

