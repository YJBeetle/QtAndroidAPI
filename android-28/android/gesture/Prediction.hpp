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
		
		// QJniObject forward
		template<typename ...Ts> explicit Prediction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Prediction(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::gesture

