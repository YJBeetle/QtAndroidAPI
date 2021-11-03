#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace android::util
{
	class Property : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Property(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Property(QAndroidJniObject obj);
		
		// Constructors
		Property(JClass arg0, JString arg1);
		
		// Methods
		static android::util::Property of(JClass arg0, JClass arg1, JString arg2);
		JObject get(JObject arg0);
		JString getName();
		JClass getType();
		jboolean isReadOnly();
		void set(JObject arg0, JObject arg1);
	};
} // namespace android::util

