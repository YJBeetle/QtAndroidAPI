#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::view::inspector
{
	class IntFlagMapping : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntFlagMapping(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntFlagMapping(QAndroidJniObject obj);
		
		// Constructors
		IntFlagMapping();
		
		// Methods
		void add(jint arg0, jint arg1, JString arg2);
		JObject get(jint arg0);
	};
} // namespace android::view::inspector

