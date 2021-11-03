#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class MutableFloat : public JObject
	{
	public:
		// Fields
		jfloat value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableFloat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableFloat(QAndroidJniObject obj);
		
		// Constructors
		MutableFloat(jfloat arg0);
		
		// Methods
	};
} // namespace android::util

