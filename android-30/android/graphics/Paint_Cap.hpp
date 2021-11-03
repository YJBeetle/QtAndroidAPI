#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Cap : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Cap BUTT();
		static android::graphics::Paint_Cap ROUND();
		static android::graphics::Paint_Cap SQUARE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_Cap(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Cap(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Cap valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

