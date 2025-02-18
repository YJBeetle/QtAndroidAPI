#pragma once

#include "./HandwritingGesture.def.hpp"

namespace android::view::inputmethod
{
	class PreviewableHandwritingGesture : public android::view::inputmethod::HandwritingGesture
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PreviewableHandwritingGesture(const char *className, const char *sig, Ts...agv) : android::view::inputmethod::HandwritingGesture(className, sig, std::forward<Ts>(agv)...) {}
		PreviewableHandwritingGesture(QJniObject obj) : android::view::inputmethod::HandwritingGesture(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::inputmethod

