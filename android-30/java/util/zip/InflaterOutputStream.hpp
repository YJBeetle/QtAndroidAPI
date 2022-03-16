#pragma once

#include "../../io/FilterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
namespace java::util::zip
{
	class Inflater;
}

namespace java::util::zip
{
	class InflaterOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InflaterOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		InflaterOutputStream(QAndroidJniObject obj) : java::io::FilterOutputStream(obj) {}
		
		// Constructors
		InflaterOutputStream(java::io::OutputStream arg0);
		InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1);
		InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1, jint arg2);
		
		// Methods
		void close() const;
		void finish() const;
		void flush() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip

