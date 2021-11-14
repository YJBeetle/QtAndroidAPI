#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::util
{
	class JsonToken : public java::lang::Enum
	{
	public:
		// Fields
		static android::util::JsonToken BEGIN_ARRAY();
		static android::util::JsonToken BEGIN_OBJECT();
		static android::util::JsonToken BOOLEAN();
		static android::util::JsonToken END_ARRAY();
		static android::util::JsonToken END_DOCUMENT();
		static android::util::JsonToken END_OBJECT();
		static android::util::JsonToken NAME();
		static android::util::JsonToken NULL_();
		static android::util::JsonToken NUMBER();
		static android::util::JsonToken STRING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JsonToken(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		JsonToken(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::util::JsonToken valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::util

