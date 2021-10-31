#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Canvas_EdgeType : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Canvas_EdgeType AA();
		static android::graphics::Canvas_EdgeType BW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Canvas_EdgeType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Canvas_EdgeType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Canvas_EdgeType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics
