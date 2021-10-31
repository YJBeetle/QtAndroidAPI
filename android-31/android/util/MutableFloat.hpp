#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableFloat : public __JniBaseClass
	{
	public:
		// Fields
		jfloat value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableFloat(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableFloat(QJniObject obj);
		
		// Constructors
		MutableFloat(jfloat arg0);
		
		// Methods
	};
} // namespace android::util

