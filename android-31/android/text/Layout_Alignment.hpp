#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::text
{
	class Layout_Alignment : public java::lang::Enum
	{
	public:
		// Fields
		static android::text::Layout_Alignment ALIGN_CENTER();
		static android::text::Layout_Alignment ALIGN_NORMAL();
		static android::text::Layout_Alignment ALIGN_OPPOSITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Layout_Alignment(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Layout_Alignment(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::Layout_Alignment valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text

