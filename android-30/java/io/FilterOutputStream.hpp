#pragma once

#include "./OutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
class JObject;

namespace java::io
{
	class FilterOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FilterOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		FilterOutputStream(QJniObject obj);
		
		// Constructors
		FilterOutputStream(java::io::OutputStream arg0);
		
		// Methods
		void close();
		void flush();
		void write(JByteArray arg0);
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

