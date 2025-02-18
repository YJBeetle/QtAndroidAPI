#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class EmojiConsistency : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EmojiConsistency(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EmojiConsistency(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject getEmojiConsistencySet();
	};
} // namespace android::text

