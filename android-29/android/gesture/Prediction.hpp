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
		
		Prediction(QAndroidJniObject obj);
		// Constructors
		Prediction() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::gesture

