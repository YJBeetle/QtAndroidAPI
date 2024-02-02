#pragma once

#include "../../../JObject.hpp"

namespace android::view::inputmethod
{
	class TextBoundsInfo;
}

namespace android::view::inputmethod
{
	class TextBoundsInfoResult : public JObject
	{
	public:
		// Fields
		static jint CODE_CANCELLED();
		static jint CODE_FAILED();
		static jint CODE_SUCCESS();
		static jint CODE_UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextBoundsInfoResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextBoundsInfoResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextBoundsInfoResult(jint arg0);
		TextBoundsInfoResult(jint arg0, android::view::inputmethod::TextBoundsInfo arg1);
		
		// Methods
		jint getResultCode() const;
		android::view::inputmethod::TextBoundsInfo getTextBoundsInfo() const;
	};
} // namespace android::view::inputmethod

