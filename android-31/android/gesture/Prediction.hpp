#pragma once

#include "../../JObject.hpp"


namespace android::gesture
{
	class Prediction : public JObject
	{
	public:
		// Fields
		jstring name();
		jdouble score();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Prediction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Prediction(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::gesture

