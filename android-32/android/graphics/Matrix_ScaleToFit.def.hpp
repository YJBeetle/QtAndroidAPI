#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Matrix_ScaleToFit : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Matrix_ScaleToFit CENTER();
		static android::graphics::Matrix_ScaleToFit END();
		static android::graphics::Matrix_ScaleToFit FILL();
		static android::graphics::Matrix_ScaleToFit START();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matrix_ScaleToFit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Matrix_ScaleToFit(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Matrix_ScaleToFit valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

