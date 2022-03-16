#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class MutableBoolean : public JObject
	{
	public:
		// Fields
		jboolean value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableBoolean(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableBoolean(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MutableBoolean(jboolean arg0);
		
		// Methods
	};
} // namespace android::util

