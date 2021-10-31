#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_TextSize : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_TextSize LARGER();
		static android::webkit::WebSettings_TextSize LARGEST();
		static android::webkit::WebSettings_TextSize NORMAL();
		static android::webkit::WebSettings_TextSize SMALLER();
		static android::webkit::WebSettings_TextSize SMALLEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSettings_TextSize(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_TextSize(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_TextSize valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

