SUBDIRS = Problem01 Problem02 Problem03 Problem04

all:
		@for subdir in $(SUBDIRS); do \
		echo "Making all in $$subdir"; \
	 cd $$subdir && $(MAKE) all; \
	 cd ..; \
	 done

clean:
		@for subdir in $(SUBDIRS); do \
		echo "Making all in $$subdir"; \
	 cd $$subdir && $(MAKE) clean; \
	 cd ..; \
	 done