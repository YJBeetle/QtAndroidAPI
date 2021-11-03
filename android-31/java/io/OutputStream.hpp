#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace java::io
{
	class OutputStream : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OutputStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OutputStream(QAndroidJniObject obj);
		
		// Constructors
		OutputStream();
		
		// Methods
		static java::io::OutputStream nullOutputStream();
		void close();
		void flush();
		void write(JByteArray arg0);
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

