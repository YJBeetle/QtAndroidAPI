#pragma once

#include "../../../JObject.hpp"


namespace java::util::stream
{
	class StreamSupport : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamSupport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamSupport(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject doubleStream(JObject arg0, jboolean arg1);
		static JObject doubleStream(JObject arg0, jint arg1, jboolean arg2);
		static JObject intStream(JObject arg0, jboolean arg1);
		static JObject intStream(JObject arg0, jint arg1, jboolean arg2);
		static JObject longStream(JObject arg0, jboolean arg1);
		static JObject longStream(JObject arg0, jint arg1, jboolean arg2);
		static JObject stream(JObject arg0, jboolean arg1);
		static JObject stream(JObject arg0, jint arg1, jboolean arg2);
	};
} // namespace java::util::stream

