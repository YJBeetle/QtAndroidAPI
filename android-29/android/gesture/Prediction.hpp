#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::gesture
{
	class Prediction : public __JniBaseClass
	{
	public:
		// Fields
		jstring name();
		jdouble score();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Prediction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Prediction(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::gesture

