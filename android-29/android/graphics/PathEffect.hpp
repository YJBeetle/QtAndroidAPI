#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class PathEffect : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PathEffect(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PathEffect(QJniObject obj);
		
		// Constructors
		PathEffect();
		
		// Methods
	};
} // namespace android::graphics

