#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Paint_Style : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Style FILL();
		static android::graphics::Paint_Style FILL_AND_STROKE();
		static android::graphics::Paint_Style STROKE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Style(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Style valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

