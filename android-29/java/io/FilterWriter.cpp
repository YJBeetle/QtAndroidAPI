#include "./Writer.hpp"
#include "./FilterWriter.hpp"

namespace java::io
{
	// Fields
	
	FilterWriter::FilterWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void FilterWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void FilterWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FilterWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void FilterWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

