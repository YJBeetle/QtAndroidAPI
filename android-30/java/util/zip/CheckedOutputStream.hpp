#pragma once

#include "../../io/FilterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}

namespace java::util::zip
{
	class CheckedOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CheckedOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		CheckedOutputStream(QJniObject obj);
		
		// Constructors
		CheckedOutputStream(java::io::OutputStream arg0, JObject arg1);
		
		// Methods
		JObject getChecksum();
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

