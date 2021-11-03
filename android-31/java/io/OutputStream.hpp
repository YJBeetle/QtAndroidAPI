#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace java::io
{
	class OutputStream : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OutputStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OutputStream(QJniObject obj);
		
		// Constructors
		OutputStream();
		
		// Methods
		static java::io::OutputStream nullOutputStream();
		void close() const;
		void flush() const;
		void write(JByteArray arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

