#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class FloatMath : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatMath(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FloatMath(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

