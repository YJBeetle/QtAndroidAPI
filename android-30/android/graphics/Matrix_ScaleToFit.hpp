#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit Matrix_ScaleToFit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Matrix_ScaleToFit(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Matrix_ScaleToFit valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

