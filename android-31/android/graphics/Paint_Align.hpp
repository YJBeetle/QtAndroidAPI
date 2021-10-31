#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Align : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Align CENTER();
		static android::graphics::Paint_Align LEFT();
		static android::graphics::Paint_Align RIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_Align(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Align(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Align valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

